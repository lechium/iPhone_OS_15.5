//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface EDAMNoteRestrictions
{
    NSNumber *_noUpdateTitle;	// 8 = 0x8
    NSNumber *_noUpdateContent;	// 16 = 0x10
    NSNumber *_noEmail;	// 24 = 0x18
    NSNumber *_noShare;	// 32 = 0x20
    NSNumber *_noSharePublicly;	// 40 = 0x28
}

+ (id)structFields;	// IMP=0x0000000000231cc7
+ (id)structName;	// IMP=0x0000000000231cba
- (void).cxx_destruct;	// IMP=0x0000000000231f3d
@property(retain, nonatomic) NSNumber *noSharePublicly; // @synthesize noSharePublicly=_noSharePublicly;
@property(retain, nonatomic) NSNumber *noShare; // @synthesize noShare=_noShare;
@property(retain, nonatomic) NSNumber *noEmail; // @synthesize noEmail=_noEmail;
@property(retain, nonatomic) NSNumber *noUpdateContent; // @synthesize noUpdateContent=_noUpdateContent;
@property(retain, nonatomic) NSNumber *noUpdateTitle; // @synthesize noUpdateTitle=_noUpdateTitle;

@end
