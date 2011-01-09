/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKUserLocationViewInternal;



@interface MKHoverAnimation : CAAnimationGroup 
{
    MKUserLocationViewInternal *viewImpl;
}

@property MKUserLocationViewInternal *viewImpl;
@property float restAccuracy;

+ (id)defaultValueForKey:(id)arg1;
+ (id)fallAnimation;
+ (id)bounceAnimation;
+ (id)hoverAnimation;

- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)init;
- (void)dealloc;
- (void)drawAccuracyLayer:(float)arg1;
- (void)setInitialAccuracy:(float)arg1 restAccuracy:(float)arg2 drawAccuracy:(float)arg3;
- (void)setViewImpl:(id)arg1;
- (id)viewImpl;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;

@end