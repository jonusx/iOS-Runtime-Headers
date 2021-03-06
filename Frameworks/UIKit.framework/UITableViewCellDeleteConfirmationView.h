/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITableViewCellDeleteConfirmationButton;

@interface UITableViewCellDeleteConfirmationView : UIView {
    UITableViewCellDeleteConfirmationButton *_accessoryView;
    float _cornerRadius;
    UITableViewCellDeleteConfirmationButton *_deleteView;
    int _sectionLocation;
    float _visibleWidth;
}

@property(readonly) UITableViewCellDeleteConfirmationButton * accessoryView;
@property float cornerRadius;
@property(readonly) UITableViewCellDeleteConfirmationButton * deleteView;
@property int sectionLocation;
@property float visibleWidth;

- (id)accessoryView;
- (float)cornerRadius;
- (void)dealloc;
- (id)deleteView;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 deleteView:(id)arg2 accessoryView:(id)arg3;
- (int)sectionLocation;
- (void)setCornerRadius:(float)arg1;
- (void)setSectionLocation:(int)arg1;
- (void)setVisibleWidth:(float)arg1;
- (void)updateMaskView:(BOOL)arg1;
- (float)visibleWidth;

@end
