//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol VCMomentsMessenger;

__attribute__((visibility("hidden")))
@interface VCMomentsManagerStreamTokenClientList : NSObject
{
    long long _streamToken;	// 8 = 0x8
    id <VCMomentsMessenger> _messenger;	// 16 = 0x10
    NSMutableArray *_clientContextList;	// 24 = 0x18
}

+ (long long)streamTokenFromClientContext:(id)arg1;	// IMP=0x00000000001015e2
+ (_Bool)isValidContext:(id)arg1;	// IMP=0x00000000001015b9
@property(readonly, nonatomic) NSArray *clientContextList; // @synthesize clientContextList=_clientContextList;
@property(readonly, nonatomic) id <VCMomentsMessenger> messenger; // @synthesize messenger=_messenger;
- (void)dealloc;	// IMP=0x00000000001015f7
- (void)removeContext:(id)arg1;	// IMP=0x00000000001015a3
- (id)newContext;	// IMP=0x0000000000101550
- (id)initWithStreamToken:(long long)arg1 messenger:(id)arg2;	// IMP=0x00000000001014c2

@end
