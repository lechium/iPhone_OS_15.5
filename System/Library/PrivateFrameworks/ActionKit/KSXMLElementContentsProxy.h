//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class KSXMLWriter;

@interface KSXMLElementContentsProxy : NSProxy
{
    id _target;	// 8 = 0x8
    KSXMLWriter *_XMLWriter;	// 16 = 0x10
    unsigned long long _elementsCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000219697
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000021957b
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000021955e
- (void)ks_prepareWithTarget:(id)arg1 XMLWriter:(id)arg2;	// IMP=0x0000000000219430

@end
