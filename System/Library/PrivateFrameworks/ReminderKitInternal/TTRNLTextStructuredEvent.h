//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, TTRNLTextStructuredEventRecurrentEvent;

@interface TTRNLTextStructuredEvent : NSObject
{
    void *_structuredEvent;	// 8 = 0x8
}

@property(nonatomic) void *structuredEvent; // @synthesize structuredEvent=_structuredEvent;
@property(readonly, nonatomic) NSArray *locations;
@property(readonly, nonatomic) TTRNLTextStructuredEventRecurrentEvent *recurrentEvent;
- (void)dealloc;	// IMP=0x0000000000002282
- (id)initWithStructuredEvent:(void *)arg1;	// IMP=0x0000000000002233

@end
