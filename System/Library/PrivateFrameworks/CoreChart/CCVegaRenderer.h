//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreChart/CCAsyncQueueDelegate-Protocol.h>
#import <CoreChart/CCVegaWorkerClientDelegate-Protocol.h>

@class CALayer, CCAsyncQueue, CCVegaCARenderer, CCVegaExpressionFunctions, CCVegaHTMLElement, CCVegaWorker, CCVegaWorkerClient, CCViewRendererDelegate, JSValue, NSArray, NSCalendar, NSLocale, NSMutableSet, NSString, UITraitCollection;
@protocol CCVegaRendererDelegate;

@interface CCVegaRenderer : NSObject <CCAsyncQueueDelegate, CCVegaWorkerClientDelegate>
{
    NSLocale *_locale;	// 8 = 0x8
    NSCalendar *_calendar;	// 16 = 0x10
    CCVegaExpressionFunctions *_builtinExpressionFunctions;	// 24 = 0x18
    double _width;	// 32 = 0x20
    double _height;	// 40 = 0x28
    struct CGImage *_currentCGImage;	// 48 = 0x30
    double _currentCGImageScaleFactor;	// 56 = 0x38
    _Bool _needsUpdateFromMainThread;	// 64 = 0x40
    NSMutableSet *_pendingDataUpdates;	// 72 = 0x48
    double _internalScaleFactor;	// 80 = 0x50
    double _internalZoomFactor;	// 88 = 0x58
    CALayer *_caLayer;	// 96 = 0x60
    NSArray *_data;	// 104 = 0x68
    _Bool _isActive;	// 112 = 0x70
    double _scaleFactor;	// 120 = 0x78
    double _zoomFactor;	// 128 = 0x80
    UITraitCollection *_traitCollection;	// 136 = 0x88
    unsigned int rendererType;	// 144 = 0x90
    CCVegaWorker *worker;	// 152 = 0x98
    CCVegaWorkerClient *workerClient;	// 160 = 0xa0
    NSString *spec;	// 168 = 0xa8
    NSString *config;	// 176 = 0xb0
    CCVegaHTMLElement *container;	// 184 = 0xb8
    CCVegaCARenderer *CARenderer;	// 192 = 0xc0
    CCViewRendererDelegate *viewDelegate;	// 200 = 0xc8
    CCAsyncQueue *asyncQueue;	// 208 = 0xd0
    JSValue *renderer;	// 216 = 0xd8
    NSObject<CCVegaRendererDelegate> *delegate;	// 224 = 0xe0
    struct CGImage *currentCGImage;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x000000000002f5ec
@property __weak NSObject<CCVegaRendererDelegate> *delegate; // @synthesize delegate;
@property(retain, nonatomic) JSValue *renderer; // @synthesize renderer;
@property(retain, nonatomic) CCAsyncQueue *asyncQueue; // @synthesize asyncQueue;
@property(retain) CCViewRendererDelegate *viewDelegate; // @synthesize viewDelegate;
@property(retain) CCVegaCARenderer *CARenderer; // @synthesize CARenderer;
@property(retain, nonatomic) CCVegaHTMLElement *container; // @synthesize container;
@property(retain, nonatomic) NSString *config; // @synthesize config;
@property(retain, nonatomic) NSString *spec; // @synthesize spec;
@property(retain) CCVegaWorkerClient *workerClient; // @synthesize workerClient;
@property(retain) CCVegaWorker *worker; // @synthesize worker;
@property unsigned int rendererType; // @synthesize rendererType;
- (id)accessibilityElements;	// IMP=0x000000000002f426
- (struct CGImage *)newImageFromURL:(id)arg1;	// IMP=0x000000000002f2db
- (struct CGColor *)newColorFromCSSString:(id)arg1 alpha:(double)arg2;	// IMP=0x000000000002f141
- (struct CGColor *)newColorFromCSSString:(id)arg1;	// IMP=0x000000000002f127
- (void)clearPendingDataUpdates;	// IMP=0x000000000002f111
- (_Bool)hasPendingDataUpdate:(id)arg1;	// IMP=0x000000000002f0fb
- (void)addPendingDataUpdate:(id)arg1;	// IMP=0x000000000002f0e5
- (void)loadState:(id)arg1;	// IMP=0x000000000002ef20
- (id)saveStateWithNamedDatasets:(id)arg1;	// IMP=0x000000000002ec54
- (void)removeListener:(id)arg1 fromSignalWithName:(id)arg2;	// IMP=0x000000000002ea44
- (id)addListener:(CDUnknownBlockType)arg1 toSignalWithName:(id)arg2;	// IMP=0x000000000002e798
- (void)setSignalWithName:(id)arg1 toValue:(id)arg2;	// IMP=0x000000000002e6b0
- (id)getSignalWithName:(id)arg1;	// IMP=0x000000000002e387
- (void)changeNamedDataset:(id)arg1 inserting:(id)arg2 removingWithCallback:(CDUnknownBlockType)arg3;	// IMP=0x000000000002e226
- (void)changeNamedDataset:(id)arg1 inserting:(id)arg2 removingIDs:(id)arg3;	// IMP=0x000000000002e12a
- (void)changeDefaultDatasetByInserting:(id)arg1 removingIDs:(id)arg2;	// IMP=0x000000000002e10b
- (void)setNamedDataset:(id)arg1 rows:(id)arg2;	// IMP=0x000000000002e0ea
- (void)setDefaultDataset:(id)arg1;	// IMP=0x000000000002e0ce
@property(retain, nonatomic) NSArray *data;
- (void)rerenderEntireChart;	// IMP=0x000000000002de2b
- (id)fontOptions;	// IMP=0x000000000002dd58
- (void)triggerEventWithType:(id)arg1 event:(id)arg2 waitForEventHandling:(_Bool)arg3;	// IMP=0x000000000002dc38
- (id)newDataWithPDFImage;	// IMP=0x000000000002d732
- (struct CGImage *)renderToCGImage;	// IMP=0x000000000002cff5
- (void)rerender;	// IMP=0x000000000002ceca
- (double)currentBitmapScaleFactor;	// IMP=0x000000000002ce8c
- (struct CGImage *)currentBitmap;	// IMP=0x000000000002ce20
@property struct CGImage *currentCGImage; // @synthesize currentCGImage;
- (id)cursor;	// IMP=0x000000000002cce7
- (double)height;	// IMP=0x000000000002ccdc
- (double)width;	// IMP=0x000000000002ccd1
- (id)vegaContext;	// IMP=0x000000000002ca46
@property(retain) UITraitCollection *traitCollection;
- (void)setLocale:(id)arg1 calendar:(id)arg2 shouldRefresh:(_Bool)arg3;	// IMP=0x000000000002c885
@property(retain) NSCalendar *calendar;
@property(retain) NSLocale *locale;
@property double zoomFactor;
@property double scaleFactor;
- (void)updateScaleFactor:(double)arg1 zoomFactor:(double)arg2;	// IMP=0x000000000002c0aa
- (void)setSize:(struct CGSize)arg1;	// IMP=0x000000000002bdd4
- (void)runAsyncWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b8b6
- (void)runAsync;	// IMP=0x000000000002b84f
- (void)updateNativeView;	// IMP=0x000000000002b5b9
- (void)workerDidExecuteTimerCallback;	// IMP=0x000000000002b5a7
- (void)workerContextExit;	// IMP=0x000000000002b5a1
- (void)workerContextEnter;	// IMP=0x000000000002b41f
- (void)simplifyQueue:(id)arg1;	// IMP=0x000000000002b1a4
- (void)refreshNativeSignalsRerunDataflow:(_Bool)arg1;	// IMP=0x000000000002ae24
- (void)refreshNativeSignals;	// IMP=0x000000000002ae10
- (void)setupScreenSignal;	// IMP=0x000000000002ab88
- (void)setupSignalHandlers;	// IMP=0x0000000000029768
@property _Bool isActive;
@property(retain) CALayer *caLayer;
@property(readonly) _Bool specIsValid;
- (void)dealloc;	// IMP=0x0000000000029280
- (void)updateInMainThreadIfNeeded;	// IMP=0x000000000002912d
- (void)_doUpdateInMainThread;	// IMP=0x0000000000028fe4
- (void)displayWithCommitter:(id)arg1;	// IMP=0x0000000000028b72
- (void)enqueueRunAsync;	// IMP=0x0000000000028a23
- (void)scheduleDisplay;	// IMP=0x00000000000289d0
- (id)initWithSpec:(id)arg1 config:(id)arg2 options:(id)arg3 workerClient:(id)arg4;	// IMP=0x0000000000027734

@end

