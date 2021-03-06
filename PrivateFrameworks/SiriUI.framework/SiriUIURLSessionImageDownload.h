/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableData, NSObject<OS_dispatch_queue>, UIColor;

@interface SiriUIURLSessionImageDownload : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    UIColor *_backgroundFillColor;
    id _client;
    NSMutableData *_downloadedData;
    BOOL _finished;
    } _fitToSize;
    BOOL _hasSentFinished;
    struct CGImageSource { } *_imageSource;
    unsigned int _lastUpdatedLength;
    id _progressHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_updateImageFromURL:(id)arg1 error:(id)arg2;
- (void)appendDownloadedData:(id)arg1 fromURL:(id)arg2;
- (void)dealloc;
- (void)finishedFromURL:(id)arg1 error:(id)arg2;
- (id)initWithFitToSize:(struct CGSize { float x1; float x2; })arg1 progressHandler:(id)arg2 incremental:(BOOL)arg3 client:(id)arg4 fillColor:(id)arg5;

@end
