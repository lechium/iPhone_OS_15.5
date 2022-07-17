//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarPlay/NSSecureCoding-Protocol.h>

@class NSString;

@interface CPInformationItem : NSObject <NSSecureCoding>
{
    NSString *_title;	// 8 = 0x8
    NSString *_detail;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000019c40
- (void).cxx_destruct;	// IMP=0x0000000000019dd3
@property(readonly, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000019d11
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000019c48
- (id)_init;	// IMP=0x0000000000019c11
- (id)initWithTitle:(id)arg1 detail:(id)arg2;	// IMP=0x0000000000019b58

@end
