//
//  JJJUtil.h
//  JJJ
//
//  Created by Jovito Royeca on 11/19/13.
//  Copyright (c) 2013 Jovito Royeca. All rights reserved.
//

@import Foundation;

#import "JJJConstants.h"

#if defined(_OS_IPHONE) || defined(_OS_IPHONE_SIMULATOR)
@import UIKit;
#endif

#define COMPOUND_SEPARATOR @"&#&"

//#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

@interface JJJUtil : NSObject

+ (BOOL) string:(NSString *)string containsString:(NSString*)x;
+ (BOOL) isEmptyString:(NSString*)string;
+ (BOOL) isAlphaStart:(NSString*)string;
+ (NSString*) arrayToString:(NSArray*)arr;
+ (NSString*) toUTF8:(NSString*)string;
+ (NSString*) toASCII:(NSString*)string;
+ (NSString*) trim:(NSString*)string;
+ (NSString*) superScriptOf:(NSString*)string;
+ (NSString*) subScriptOf:(NSString*)string;
+ (NSString*) formatInterval: (NSTimeInterval) interval;
+ (NSArray*) alphabetWithWildcard;
+ (NSString*) termInitial:(NSString*) term;
+ (NSString*) highlightTerm:(NSString*) term withQuery:(NSString*) query;
+ (BOOL) stringContainsSpace:(NSString*)string;

+ (NSString*) runCommand:(NSString*) command;

+ (void) downloadResource:(NSURL*) url toPath:(NSString*) path;

+ (NSDate*) parseDate:(NSString*)date withFormat:(NSString*) format;
+ (NSString*) formatDate:(NSDate *)date withFormat:(NSString*) format;
+ (NSString*) reverseString:(NSString*) string;
+ (NSString*) stringWithNewLinesAsBRs:(NSString*)text;
+ (BOOL) addSkipBackupAttributeToItemAtURL:(NSURL *)URL;
+ (NSString*) removeNewLines:(NSString*)text;

#if defined(_OS_IPHONE) || defined(_OS_IPHONE_SIMULATOR)
+ (UIColor*) UIColorFromRGB:(NSUInteger) rgbValue;
+ (UIColor*)colorFromHexString:(NSString *)hexString;

+ (void)alertWithTitle:(NSString *)title andMessage:(NSString *)message;
+ (void)alertWithTitle:(NSString*) title
               message:(NSString*) message
     cancelButtonTitle:(NSString*) cancelTitle
     otherButtonTitles:(NSDictionary*) otherButtons
     textFieldHandlers:(NSArray*) textFieldHandlers;
+ (UIImage *)imageWithImage:(UIImage *)image scaledToSize:(CGSize)newSize;
#endif

@end