//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRFileObjectID, NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface BRQueryStitch : NSObject
{
    NSArray *_contexts;	// 8 = 0x8
    BRFileObjectID *_objid;	// 16 = 0x10
    BOOL _kind;	// 24 = 0x18
    NSURL *_fromURL;	// 32 = 0x20
    NSURL *_url;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000005f374
@property(retain, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
@property(retain, nonatomic) NSURL *fromURL; // @synthesize fromURL=_fromURL;
- (void)dealloc;	// IMP=0x000000000005f2f6
- (void)done;	// IMP=0x000000000005f262
- (void)_deletionDone;	// IMP=0x000000000005ec0a
- (void)_renameDone;	// IMP=0x000000000005e540
- (void)_creationDone;	// IMP=0x000000000005e13c
- (void)_enableUpdatesFromIPCAfterStitchingOnAllQueries;	// IMP=0x000000000005dff7
- (void)setQueries:(id)arg1;	// IMP=0x000000000005dd81
- (id)description;	// IMP=0x000000000005dc8e
- (id)initWithURL:(id)arg1 objid:(id)arg2 kind:(BOOL)arg3;	// IMP=0x000000000005dbea

@end

