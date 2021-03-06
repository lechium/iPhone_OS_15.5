//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface SFUDataRepresentation : NSObject
{
    _Bool mHasHash;	// 8 = 0x8
    unsigned int mHash;	// 12 = 0xc
    _Bool mHasSha1Hash;	// 16 = 0x10
    NSData *mSha1Hash;	// 24 = 0x18
}

- (long long)compare:(id)arg1;	// IMP=0x0000000000045c2f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000045a2f
- (id)sha1Hash;	// IMP=0x0000000000045976
- (unsigned int)uint32Hash;	// IMP=0x000000000004582b
- (unsigned long long)hash;	// IMP=0x0000000000045816
- (unsigned long long)readIntoData:(id)arg1;	// IMP=0x000000000004569e
- (struct CGDataProvider *)cgDataProvider;	// IMP=0x00000000000455dd
- (struct _xmlTextReader *)xmlReaderForGzippedDataWithInputStream:(id *)arg1;	// IMP=0x0000000000045423
- (struct _xmlTextReader *)xmlReaderForGzippedData;	// IMP=0x000000000004540f
- (struct _xmlTextReader *)xmlReader;	// IMP=0x00000000000452ab
- (struct _xmlDoc *)xmlDocument;	// IMP=0x0000000000044f66
- (_Bool)hasSameLocationAs:(id)arg1;	// IMP=0x0000000000044f5e
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1;	// IMP=0x0000000000044f07
- (id)bufferedInputStream;	// IMP=0x0000000000044ea3
- (id)inputStream;	// IMP=0x0000000000044e1e
- (_Bool)isEncrypted;	// IMP=0x0000000000044e16
- (long long)encodedLength;	// IMP=0x0000000000044e04
- (long long)dataLength;	// IMP=0x0000000000044d7f
- (_Bool)isReadable;	// IMP=0x0000000000044d77

@end

