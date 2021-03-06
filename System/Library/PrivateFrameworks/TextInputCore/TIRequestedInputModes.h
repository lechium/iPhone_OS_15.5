//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface TIRequestedInputModes : NSObject
{
    _Bool _didLoad;	// 8 = 0x8
    NSURL *_databaseURL;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSMutableDictionary *_inputModesByDate;	// 32 = 0x20
}

+ (id)defaultDatabaseURL;	// IMP=0x0000000000178645
- (void).cxx_destruct;	// IMP=0x00000000001782c4
- (void)removeAllInputModes:(CDUnknownBlockType)arg1;	// IMP=0x0000000000178239
- (void)removeInputModesBeforeDate:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000178181
- (void)addInputMode:(id)arg1 date:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000017809c
- (void)inputModes:(CDUnknownBlockType)arg1;	// IMP=0x0000000000178011
- (void)_removeAllInputModes:(CDUnknownBlockType)arg1;	// IMP=0x0000000000177f7f
- (void)_removeInputModesBeforeDate:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000177ec4
- (void)_addInputMode:(id)arg1 date:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000177ddf
- (void)_inputModes:(CDUnknownBlockType)arg1;	// IMP=0x0000000000177d4d
- (id)_inputModes;	// IMP=0x0000000000177d01
- (void)_saveInputModes;	// IMP=0x0000000000177c79
- (void)_loadIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000177b92
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000177ad6
- (id)init;	// IMP=0x0000000000177a7c

@end

