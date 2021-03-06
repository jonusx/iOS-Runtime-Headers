/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIEditorialComponent, SKUIEditorialLayout;

@interface SKUIEditorialPageSection : SKUIStorePageSection {
    SKUIEditorialLayout *_editorialLayout;
    BOOL _isExpanded;
}

@property(readonly) SKUIEditorialComponent * pageComponent;

- (void).cxx_destruct;
- (id)_editorialLayout;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (int)numberOfCells;
- (void)willAppearInContext:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
