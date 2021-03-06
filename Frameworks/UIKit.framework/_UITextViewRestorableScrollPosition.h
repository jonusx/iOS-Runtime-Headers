/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITextViewRestorableScrollPosition : NSObject <NSCoding> {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    float _offsetInLine;
    } _range;
}

+ (id)restorableScrollPositionForTextView:(id)arg1;
+ (id)restorableScrollPositionWithDictionary:(id)arg1;
+ (id)restorableScrollPositionWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextView:(id)arg1;
- (float)offsetWithinLine;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;

@end
