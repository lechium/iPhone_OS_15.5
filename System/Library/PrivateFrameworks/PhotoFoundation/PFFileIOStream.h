//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoFoundation/PFOStream-Protocol.h>

@class NSString;

@interface PFFileIOStream <PFOStream>
{
}

- (_Bool)truncateLength:(long long)arg1;	// IMP=0x000000000000f74b
- (_Bool)writeStream:(id)arg1 blockSize:(unsigned long long)arg2;	// IMP=0x000000000000f698
- (_Bool)writeStream:(id)arg1;	// IMP=0x000000000000f63c
- (_Bool)writeStream:(const char *)arg1 length:(unsigned long long)arg2 written:(unsigned long long *)arg3;	// IMP=0x000000000000f56e
- (_Bool)reserveLength:(long long)arg1;	// IMP=0x000000000000f4ba
- (_Bool)openStream;	// IMP=0x000000000000f3a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

