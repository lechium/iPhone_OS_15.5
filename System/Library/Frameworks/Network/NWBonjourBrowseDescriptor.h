//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NWBonjourBrowseDescriptor
{
}

+ (id)descriptorWithType:(id)arg1 domain:(id)arg2;	// IMP=0x0000000000073d30
+ (unsigned int)descriptorType;	// IMP=0x0000000000073d20
@property(readonly, nonatomic) NSString *domain;
@property(readonly, nonatomic) NSString *type;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;	// IMP=0x0000000000073620

@end

