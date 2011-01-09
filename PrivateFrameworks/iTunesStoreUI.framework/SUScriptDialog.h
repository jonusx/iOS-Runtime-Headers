/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber, NSString;



@interface SUScriptDialog : SUScriptObject 
{
    NSString *_body;
    id _buttons;
    NSNumber *_cancelButtonIndex;
    id _textFields;
    NSString *_title;
}

@property(getter=_body,retain) NSString *body; /* unknown property attribute: Sset_body: */
@property(getter=_buttons,retain) id buttons; /* unknown property attribute: Sset_buttons: */
@property(getter=_cancelButtonIndex,retain) NSNumber *cancelButtonIndex; /* unknown property attribute: Sset_cancelButtonIndex: */
@property(getter=_textFields,retain) id textFields; /* unknown property attribute: Sset_textFields: */
@property(getter=_title,retain) NSString *title; /* unknown property attribute: Sset_title: */

+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;

- (void)showFromDOMElement:(id)arg1;
- (void)set_body:(id)arg1;
- (void)set_buttons:(id)arg1;
- (void)set_cancelButtonIndex:(id)arg1;
- (void)set_textFields:(id)arg1;
- (void)_dismiss;
- (void)_show;
- (void)_logSheetWarnings;
- (id)_nativeDialog;
- (id)_textFields;
- (id)_cancelButtonIndex;
- (id)_buttons;
- (void)showSheet;
- (void)set_title:(id)arg1;
- (void)_showFromDOMElement:(id)arg1;
- (id)_body;
- (id)_title;
- (id)_className;
- (void)dismiss;
- (void)show;
- (void)dealloc;

@end