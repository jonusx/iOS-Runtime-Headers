/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIActionSheet;

@interface RCActionSheetPresentationController : NSObject <UIActionSheetDelegate> {
    UIActionSheet *_actionSheet;
    id _dismissHandlerBlock;
}

@property(readonly) UIActionSheet * actionSheet;
@property(readonly) id dismissHandlerBlock;

- (void).cxx_destruct;
- (void)_beginActionSheetAssociation;
- (void)_endActionSheetAssociation;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)actionSheet;
- (void)dealloc;
- (id)dismissHandlerBlock;
- (id)initWithActionSheet:(id)arg1 dismissHandlerBlock:(id)arg2;
- (void)showInView:(id)arg1;

@end
