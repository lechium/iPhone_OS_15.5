//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/BSDescriptionProviding-Protocol.h>
#import <SpringBoardFoundation/NSCopying-Protocol.h>
#import <SpringBoardFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface SBFGradient : NSObject <NSCopying, NSSecureCoding, BSDescriptionProviding>
{
    NSArray *_colors;	// 8 = 0x8
    NSArray *_locations;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
    struct CGPoint _startPoint;	// 32 = 0x20
    struct CGPoint _endPoint;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000703b2
- (void).cxx_destruct;	// IMP=0x00000000000709c6
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(copy, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (id)succinctDescriptionBuilder;	// IMP=0x000000000007091f
- (id)succinctDescription;	// IMP=0x00000000000708cf
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000070773
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000070723
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000704df
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000703ba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000702b3
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006ff8e
- (struct CGGradient *)copyCGGradient;	// IMP=0x000000000006fe6c
- (void)configureLayer:(id)arg1;	// IMP=0x000000000006fd6a
- (id)cgColors;	// IMP=0x000000000006fbac
- (id)init;	// IMP=0x000000000006fb34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

