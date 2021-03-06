//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarPlay/NSSecureCoding-Protocol.h>

@class CPContactEntity, NSArray, NSString, UIImage;

@interface CPContact : NSObject <NSSecureCoding>
{
    CPContactEntity *_contactEntity;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000316f1
- (void).cxx_destruct;	// IMP=0x0000000000031c37
@property(retain, nonatomic) CPContactEntity *contactEntity; // @synthesize contactEntity=_contactEntity;
@property(copy, nonatomic) NSString *informativeText; // @dynamic informativeText;
@property(copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(copy, nonatomic) NSArray *actions; // @dynamic actions;
@property(retain, nonatomic) UIImage *image; // @dynamic image;
@property(copy, nonatomic) NSString *name; // @dynamic name;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003178a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000316f9
- (id)initWithName:(id)arg1 image:(id)arg2;	// IMP=0x0000000000031619

@end

