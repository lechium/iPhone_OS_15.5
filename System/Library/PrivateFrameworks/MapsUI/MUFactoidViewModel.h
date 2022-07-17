//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsUI/MUFactoidViewModel-Protocol.h>

@class NSString;

@interface MUFactoidViewModel : NSObject <MUFactoidViewModel>
{
}

+ (id)viewModelsFromFactoids:(id)arg1;	// IMP=0x000000000006b1fc
+ (id)viewModelForFactoid:(id)arg1;	// IMP=0x000000000006aecf
@property(readonly, nonatomic) NSString *symbolName;
- (id)buildSymbolWithFont:(id)arg1;	// IMP=0x000000000006aebf
@property(readonly, nonatomic) NSString *valueString;
@property(readonly, nonatomic) NSString *titleString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
