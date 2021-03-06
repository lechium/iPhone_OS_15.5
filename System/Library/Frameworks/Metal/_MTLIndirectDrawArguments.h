//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _MTLIndirectDrawArguments : NSObject
{
    unsigned long long _primitiveType;	// 8 = 0x8
    unsigned long long _vertexStart;	// 16 = 0x10
    unsigned long long _vertexCount;	// 24 = 0x18
    unsigned long long _instanceCount;	// 32 = 0x20
    unsigned long long _baseInstance;	// 40 = 0x28
}

@property(nonatomic) unsigned long long baseInstance; // @synthesize baseInstance=_baseInstance;
@property(nonatomic) unsigned long long instanceCount; // @synthesize instanceCount=_instanceCount;
@property(nonatomic) unsigned long long vertexCount; // @synthesize vertexCount=_vertexCount;
@property(nonatomic) unsigned long long vertexStart; // @synthesize vertexStart=_vertexStart;
@property(nonatomic) unsigned long long primitiveType; // @synthesize primitiveType=_primitiveType;

@end

