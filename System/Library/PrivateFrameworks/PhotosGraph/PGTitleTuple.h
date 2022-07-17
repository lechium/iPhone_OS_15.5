//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PGTitle;

@interface PGTitleTuple : NSObject
{
    PGTitle *_title;	// 8 = 0x8
    PGTitle *_subtitle;	// 16 = 0x10
    NSArray *_locationNames;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000038ba08
@property(readonly, nonatomic) NSArray *locationNames; // @synthesize locationNames=_locationNames;
@property(readonly, nonatomic) PGTitle *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) PGTitle *title; // @synthesize title=_title;
- (id)description;	// IMP=0x000000000038b920
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000038b748
- (id)initWithWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x000000000038b733
- (id)initWithWithTitle:(id)arg1 subtitle:(id)arg2 locationNames:(id)arg3;	// IMP=0x000000000038b67c

@end
