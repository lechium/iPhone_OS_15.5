//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MapsSuggestionsObject-Protocol.h"

@class NSDictionary, NSString;
@protocol MapsSuggestionsCircuit;

@protocol MapsSuggestionsActionCircuitObserver <MapsSuggestionsObject>
- (void)actionCircuit:(id <MapsSuggestionsCircuit>)arg1 step:(NSString *)arg2 jsonDict:(NSDictionary *)arg3;
- (void)actionCircuitDidAct:(id <MapsSuggestionsCircuit>)arg1;
@end
