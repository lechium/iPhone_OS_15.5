//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface UPEmbedding : NSObject
{
    void *_embedding;	// 8 = 0x8
}

- (id)description;	// IMP=0x00000000000b0c34
- (void)dealloc;	// IMP=0x00000000000b0bdd
- (unsigned long long)getDimension;	// IMP=0x00000000000b0b97
- (id)getCoordinates;	// IMP=0x00000000000b0a5c
- (id)initWithProtobufEmbeddings:(id)arg1 forTokenAt:(int)arg2 error:(id *)arg3;	// IMP=0x00000000000b05eb
- (id)initWithCoordinates:(id)arg1;	// IMP=0x00000000000b01fa

@end

