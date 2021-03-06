//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/NUFontRegistrator-Protocol.h>

@class FCANFContent, FCAsyncOnceOperation, FCFlintResourceManager, NSMutableArray, NSString;
@protocol NUFontRegistration;

@interface NUANFFontLoader : NSObject <NUFontRegistrator>
{
    _Bool _hasLoaded;	// 8 = 0x8
    long long _relativePriority;	// 16 = 0x10
    FCANFContent *_anfContent;	// 24 = 0x18
    FCFlintResourceManager *_flintResourceManager;	// 32 = 0x20
    NSMutableArray *_fontResourcesToRegister;	// 40 = 0x28
    NSMutableArray *_fontResourcesRegistered;	// 48 = 0x30
    FCAsyncOnceOperation *_asyncOnceOperation;	// 56 = 0x38
    id <NUFontRegistration> _fontRegistration;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000016a59
@property(readonly, nonatomic) id <NUFontRegistration> fontRegistration; // @synthesize fontRegistration=_fontRegistration;
@property(readonly, nonatomic) FCAsyncOnceOperation *asyncOnceOperation; // @synthesize asyncOnceOperation=_asyncOnceOperation;
@property(readonly, nonatomic) NSMutableArray *fontResourcesRegistered; // @synthesize fontResourcesRegistered=_fontResourcesRegistered;
@property(readonly, nonatomic) NSMutableArray *fontResourcesToRegister; // @synthesize fontResourcesToRegister=_fontResourcesToRegister;
@property(readonly, nonatomic) FCFlintResourceManager *flintResourceManager; // @synthesize flintResourceManager=_flintResourceManager;
@property(readonly, nonatomic) FCANFContent *anfContent; // @synthesize anfContent=_anfContent;
@property(nonatomic) long long relativePriority; // @synthesize relativePriority=_relativePriority;
@property(readonly, nonatomic) _Bool hasLoaded; // @synthesize hasLoaded=_hasLoaded;
- (id)asyncLoadFontsOnceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015f46
- (id)loadFontsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015ec3
- (void)unregisterFontsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015ba5
- (void)registerFontsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000157a8
- (id)initWithANFContent:(id)arg1 flintResourceManager:(id)arg2 fontRegistration:(id)arg3;	// IMP=0x000000000001567c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

