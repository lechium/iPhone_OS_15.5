//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/TSUStreamReadChannel-Protocol.h>

@class NSString, TSUBufferedReadChannel;

__attribute__((visibility("hidden")))
@interface TSUBufferedReadChannelHelper : NSObject <TSUStreamReadChannel>
{
    TSUBufferedReadChannel *_bufferedReadChannel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002bb3d2
- (void)close;	// IMP=0x00000000002bb3cc
- (void)readWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002bb372
- (id)init;	// IMP=0x00000000002bb249
- (id)initWithBufferedReadChannel:(id)arg1;	// IMP=0x00000000002bb119

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
