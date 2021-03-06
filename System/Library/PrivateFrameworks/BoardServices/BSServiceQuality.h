//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BoardServices/NSCopying-Protocol.h>

@class NSString;

@interface BSServiceQuality : NSObject <NSCopying>
{
    NSString *_serviceClassName;	// 8 = 0x8
    _Bool _singleton;	// 16 = 0x10
    _Bool _main;	// 17 = 0x11
    unsigned int _serviceClass;	// 20 = 0x14
    int _relativePriority;	// 24 = 0x18
}

+ (id)serviceWithClass:(unsigned int)arg1 relativePriority:(int)arg2;	// IMP=0x000000000002d49c
+ (id)serviceWithClass:(unsigned int)arg1;	// IMP=0x000000000002d485
+ (id)main;	// IMP=0x000000000002d45c
+ (id)userInteractive;	// IMP=0x000000000002d442
+ (id)userInitiated;	// IMP=0x000000000002d428
+ (id)utility;	// IMP=0x000000000002d40e
+ (id)background;	// IMP=0x000000000002d3f4
- (void).cxx_destruct;	// IMP=0x000000000002d6be
@property(readonly, nonatomic) int relativePriority; // @synthesize relativePriority=_relativePriority;
@property(readonly, nonatomic) unsigned int serviceClass; // @synthesize serviceClass=_serviceClass;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002d6a1
- (id)description;	// IMP=0x000000000002d54c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002d4c9
- (unsigned long long)hash;	// IMP=0x000000000002d4b3
- (void)dealloc;	// IMP=0x000000000002d204
- (id)init;	// IMP=0x000000000002c7d4

@end

