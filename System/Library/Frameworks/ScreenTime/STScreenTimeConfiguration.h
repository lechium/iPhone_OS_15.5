//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenTime/NSSecureCoding-Protocol.h>

@interface STScreenTimeConfiguration : NSObject <NSSecureCoding>
{
    _Bool _enforcesChildRestrictions;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000013d4
@property _Bool enforcesChildRestrictions; // @synthesize enforcesChildRestrictions=_enforcesChildRestrictions;
- (id)description;	// IMP=0x00000000000013dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000013b1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000012ee
- (void)_stScreenTimeConfigurationCommonInitWithEnforcesChildRestrictions:(_Bool)arg1;	// IMP=0x00000000000012e5
- (id)initWithEnforcesChildRestrictions:(_Bool)arg1;	// IMP=0x0000000000001294

@end
