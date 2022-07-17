//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface GEOResultRefinementMultiSelect : NSObject
{
    _Bool _showEqualWidthButtonsOnFilterView;	// 8 = 0x8
    unsigned int _maximumNumberOfSelectElements;	// 12 = 0xc
    NSString *_displayName;	// 16 = 0x10
    NSArray *_multiSelect;	// 24 = 0x18
    long long _clauseType;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000012343d6
@property(nonatomic) long long clauseType; // @synthesize clauseType=_clauseType;
@property(readonly, nonatomic) _Bool showEqualWidthButtonsOnFilterView; // @synthesize showEqualWidthButtonsOnFilterView=_showEqualWidthButtonsOnFilterView;
@property(nonatomic) unsigned int maximumNumberOfSelectElements; // @synthesize maximumNumberOfSelectElements=_maximumNumberOfSelectElements;
@property(copy, nonatomic) NSArray *multiSelect; // @synthesize multiSelect=_multiSelect;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)convertToGEOPDResultRefinementMultiSelect;	// IMP=0x00000000012340e2
- (id)initWithResultRefinementMultiSelect:(id)arg1;	// IMP=0x0000000001233f58
- (id)initWithDisplayName:(id)arg1 multiSelect:(id)arg2 maximumNumberOfSelectElements:(unsigned int)arg3 clauseType:(long long)arg4 showEqualWidthButtonsOnFilterView:(_Bool)arg5;	// IMP=0x0000000001233e4e

@end
