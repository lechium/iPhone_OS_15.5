//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;

@interface _UICellAccessoryConfigurationCustomView
{
    _Bool _maintainsFixedSize;	// 32 = 0x20
    UIView *_customView;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002438ce
- (void).cxx_destruct;	// IMP=0x0000000000243bf1
@property(nonatomic) _Bool maintainsFixedSize; // @synthesize maintainsFixedSize=_maintainsFixedSize;
@property(readonly, nonatomic) UIView *customView; // @synthesize customView=_customView;
- (unsigned long long)hash;	// IMP=0x0000000000243b5c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000243ae0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000243a7c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002439d6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002438d6
- (id)_identifier;	// IMP=0x000000000024389e
- (_Bool)_isSystemType;	// IMP=0x0000000000243896
- (id)initWithCustomView:(id)arg1;	// IMP=0x00000000002436b7

@end
