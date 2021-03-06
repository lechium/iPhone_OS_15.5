//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface WFPHAssetCollectionDescriptor : MTLModel <NSSecureCoding>
{
    NSString *_localIdentifier;	// 8 = 0x8
    NSString *_localizedTitle;	// 16 = 0x10
}

+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)arg1;	// IMP=0x00000000003886bc
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x00000000003886a0
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000388698
- (void).cxx_destruct;	// IMP=0x000000000038882b
@property(readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, copy, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
- (id)initWithLocalIdentifier:(id)arg1 localizedTitle:(id)arg2;	// IMP=0x0000000000388733

@end

