//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ENGroup;

@interface IDSDestinationEngram
{
    ENGroup *_underlyingGroup;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000016613
- (void).cxx_destruct;	// IMP=0x000000000001670f
@property(readonly, retain, nonatomic) ENGroup *underlyingGroup; // @synthesize underlyingGroup=_underlyingGroup;
- (id)description;	// IMP=0x0000000000016676
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001666b
- (id)destinationURIs;	// IMP=0x000000000001661b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001659a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001650d
- (id)initWithENGroup:(id)arg1;	// IMP=0x000000000001649f

@end
