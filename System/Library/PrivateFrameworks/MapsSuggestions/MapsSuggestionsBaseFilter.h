//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsFilter-Protocol.h>

@class NSString;

@interface MapsSuggestionsBaseFilter : NSObject <MapsSuggestionsFilter>
{
}

+ (_Bool)isEnabled;	// IMP=0x000000000002481a
- (_Bool)shouldKeepEntry:(id)arg1;	// IMP=0x00000000000247ef
@property(readonly, nonatomic) NSString *uniqueName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
