//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSUtility/SFUZipArchiveDataRepresentation-Protocol.h>

@class NSString, SFUFileDataRepresentation;

@interface SFUZipArchiveFileDataRepresentation <SFUZipArchiveDataRepresentation>
{
    SFUFileDataRepresentation *mFileRepresentation;	// 32 = 0x20
    int mFd;	// 40 = 0x28
}

- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;	// IMP=0x000000000004b3fe
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;	// IMP=0x000000000004b2ed
- (id)path;	// IMP=0x000000000004b2d0
- (_Bool)hasSameLocationAs:(id)arg1;	// IMP=0x000000000004b227
- (id)inputStream;	// IMP=0x000000000004b20a
- (_Bool)isEncrypted;	// IMP=0x000000000004b202
- (long long)dataLength;	// IMP=0x000000000004b1e5
- (_Bool)isReadable;	// IMP=0x000000000004b1c8
- (void)dealloc;	// IMP=0x000000000004b0cd
- (id)initWithPath:(id)arg1;	// IMP=0x000000000004afe6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

