//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface LSSpotlightAction : NSObject <NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_unlocalizedTitle;	// 16 = 0x10
    NSString *_symbolImageName;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009dc87
+ (id)new;	// IMP=0x000000000009d98d
- (void).cxx_destruct;	// IMP=0x000000000009e066
@property(readonly, nonatomic) NSString *symbolImageName; // @synthesize symbolImageName=_symbolImageName;
@property(readonly, nonatomic) NSString *unlocalizedTitle; // @synthesize unlocalizedTitle=_unlocalizedTitle;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqualToSpotlightAction:(id)arg1;	// IMP=0x000000000009de1b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009dcf4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009dc8f
- (id)description;	// IMP=0x000000000009db77
- (unsigned long long)hash;	// IMP=0x000000000009da82
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009da33
- (id)_initWithIdentifier:(id)arg1 unlocalizedTitle:(id)arg2 symbolImageName:(id)arg3;	// IMP=0x000000000009d9bb
- (id)init;	// IMP=0x000000000009d996

@end
