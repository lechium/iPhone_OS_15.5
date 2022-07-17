//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface HMDSettingSelectionItem : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000005bb630
- (void).cxx_destruct;	// IMP=0x00000000005bb608
@property(readonly, copy) NSString *title; // @synthesize title=_title;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005bb532
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005bb468
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005bb45d
- (id)description;	// IMP=0x00000000005bb3a3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005bb2cf
- (unsigned long long)hash;	// IMP=0x00000000005bb28b
- (id)initWithTitle:(id)arg1;	// IMP=0x00000000005bb1bd

@end
