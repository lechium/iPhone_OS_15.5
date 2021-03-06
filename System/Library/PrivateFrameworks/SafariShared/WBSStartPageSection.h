//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSString;

@interface WBSStartPageSection : NSObject <NSSecureCoding>
{
    _Bool _enabled;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002b82c
- (void).cxx_destruct;	// IMP=0x000000000002b98f
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002b909
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002b834
- (id)sectionWithEnabled:(_Bool)arg1;	// IMP=0x000000000002b7da
- (id)description;	// IMP=0x000000000002b77a
- (id)initWithIdentifier:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x000000000002b6f0

@end

