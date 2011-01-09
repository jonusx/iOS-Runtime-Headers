/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDelayedAction, UIResponder<UITextInput>;



@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer 
{
    UIResponder<UITextInput> *_textInput;
    UIDelayedAction *_secondDelayTimer;
    double _secondDelay;
    BOOL _secondDelayElapsed;
    id _userData;
}

@property id userData;
@property(readonly) BOOL secondDelayElapsed;
@property double secondDelay;
@property UIResponder<UITextInput> *textInput;


- (void)secondDelayElapsed:(id)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (BOOL)secondDelayElapsed;
- (double)secondDelay;
- (void)setSecondDelay:(double)arg1;
- (id)textInput;
- (void)setTextInput:(id)arg1;
- (void)clearTimer;
- (void)startTimer;
- (void)_resetGestureRecognizer;
- (void)setState:(NSInteger)arg1;

@end