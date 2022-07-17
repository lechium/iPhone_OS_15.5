//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/SFUInputStream-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OISFUFileInputStream : NSObject <SFUInputStream>
{
    int mFd;	// 8 = 0x8
    _Bool mIsCachingDisabled;	// 12 = 0xc
    long long mStartOffset;	// 16 = 0x10
    long long mCurrentOffset;	// 24 = 0x18
    long long mEndOffset;	// 32 = 0x20
}

- (id)closeLocalStream;	// IMP=0x0000000000296b4c
- (void)close;	// IMP=0x0000000000296a5c
- (void)enableSystemCaching;	// IMP=0x0000000000296a09
- (void)disableSystemCaching;	// IMP=0x00000000002969b3
- (void)seekToOffset:(long long)arg1;	// IMP=0x0000000000296869
- (_Bool)canSeek;	// IMP=0x0000000000296861
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;	// IMP=0x0000000000296726
- (long long)offset;	// IMP=0x0000000000296718
- (void)dealloc;	// IMP=0x00000000002966da
- (id)initWithPath:(id)arg1 offset:(long long)arg2;	// IMP=0x0000000000296629
- (id)initWithPath:(id)arg1 offset:(long long)arg2 length:(long long)arg3;	// IMP=0x000000000029655b
- (id)initWithFileDescriptor:(int)arg1 offset:(long long)arg2 length:(long long)arg3;	// IMP=0x00000000002964a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
