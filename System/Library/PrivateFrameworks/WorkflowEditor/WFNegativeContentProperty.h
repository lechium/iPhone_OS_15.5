//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowEditor/NSCopying-Protocol.h>

@class WFContentProperty;

@interface WFNegativeContentProperty : NSObject <NSCopying>
{
    WFContentProperty *_property;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000023aeca
@property(readonly, copy, nonatomic) WFContentProperty *property; // @synthesize property=_property;
- (unsigned long long)hash;	// IMP=0x000000000023ae62
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000023ad7a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023ad6f
- (id)initWithProperty:(id)arg1;	// IMP=0x000000000023ac40

@end

