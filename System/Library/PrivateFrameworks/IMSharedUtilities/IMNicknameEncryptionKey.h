//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface IMNicknameEncryptionKey : NSObject
{
    NSData *_data;	// 8 = 0x8
}

@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) unsigned long long length;
@property(readonly) const void *bytes;
- (void)dealloc;	// IMP=0x000000000000da44
- (id)initWithData:(id)arg1;	// IMP=0x000000000000d9f4

@end

