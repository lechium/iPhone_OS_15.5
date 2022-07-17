//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface PLFileSystemPersistenceBatchItem : NSObject
{
    NSURL *_fileURL;	// 8 = 0x8
    NSMutableDictionary *_attributes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007e32c
@property(retain, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)persist;	// IMP=0x000000000007e02e
- (void)setString:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000007dfb1
- (void)setUInt64:(unsigned long long)arg1 forKey:(id)arg2;	// IMP=0x000000000007df2a
- (void)setInt32:(int)arg1 forKey:(id)arg2;	// IMP=0x000000000007dea4
- (void)setUInt16:(unsigned short)arg1 forKey:(id)arg2;	// IMP=0x000000000007de1d
- (void)setUUIDString:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000007ddba
- (void)setData:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000007dd04
- (id)description;	// IMP=0x000000000007dc55
- (id)initWithFileURL:(id)arg1;	// IMP=0x000000000007dbd0

@end
