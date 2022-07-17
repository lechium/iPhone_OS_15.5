//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol GEOTransitLine;

__attribute__((visibility("hidden")))
@interface MKTransitInactiveLinesSectionController
{
    id <GEOTransitLine> _line;	// 56 = 0x38
    NSArray *_inactiveLines;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000bba06
- (_Bool)_newStationCardUIEnabled;	// IMP=0x00000000000bb9e2
- (void)_buildRows;	// IMP=0x00000000000bb194
- (void)_setNeedsBuildRows;	// IMP=0x00000000000bb14a
- (id)_pagingFilter;	// IMP=0x00000000000bb0ff
@property(readonly, nonatomic) NSArray *inactiveLines; // @synthesize inactiveLines=_inactiveLines;
- (id)initWithMapItem:(id)arg1 system:(id)arg2 line:(id)arg3;	// IMP=0x00000000000bb03d
- (id)init;	// IMP=0x00000000000bb013

@end
