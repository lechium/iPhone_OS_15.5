//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ICDispatchAfterHandler : NSObject
{
    NSMutableDictionary *_identifierBlockMap;	// 8 = 0x8
}

+ (id)appLifeCycleHandler;	// IMP=0x00000000000268b0
- (void).cxx_destruct;	// IMP=0x0000000000026e09
@property(retain, nonatomic) NSMutableDictionary *identifierBlockMap; // @synthesize identifierBlockMap=_identifierBlockMap;
- (void)cancelAll;	// IMP=0x0000000000026c3c
- (void)cancelBlocksWithStringIdentifier:(id)arg1;	// IMP=0x0000000000026b78
- (void)dispatchAfter:(double)arg1 stringIdentifier:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000026a1f
- (id)identifierForStringIdentifier:(id)arg1;	// IMP=0x00000000000269c8
- (id)init;	// IMP=0x000000000002695d

@end
