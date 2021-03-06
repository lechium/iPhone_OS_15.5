//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VisualTestKit/VTKComparator-Protocol.h>

@class NSString;
@protocol VTKColorDifferenceStrategy;

__attribute__((visibility("hidden")))
@interface VTKColorDifferenceComparator : NSObject <VTKComparator>
{
    id <VTKColorDifferenceStrategy> _strategy;	// 8 = 0x8
    unsigned long long _comparisonOptions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000004a30
@property(nonatomic) unsigned long long comparisonOptions; // @synthesize comparisonOptions=_comparisonOptions;
@property(retain, nonatomic) id <VTKColorDifferenceStrategy> strategy; // @synthesize strategy=_strategy;
@property(readonly, copy) NSString *description;
- (_Bool)_downscalesImages;	// IMP=0x00000000000048fe
- (_Bool)_drawAAInResults;	// IMP=0x00000000000048ec
- (_Bool)_ignoreAAInResults;	// IMP=0x00000000000048e1
- (_Bool)_strategySupportsAA;	// IMP=0x00000000000048c9
- (_Bool)_checkForAA;	// IMP=0x0000000000004878
- (id)compareImage:(id)arg1 withImage:(id)arg2;	// IMP=0x0000000000004135
- (id)initWithStrategy:(id)arg1 comparisonOptions:(unsigned long long)arg2;	// IMP=0x00000000000040bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

