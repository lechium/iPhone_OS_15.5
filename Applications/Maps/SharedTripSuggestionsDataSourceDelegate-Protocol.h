//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class SharedTripSuggestionsDataSource;

@protocol SharedTripSuggestionsDataSourceDelegate <NSObject>
- (void)suggestionsDataSourceDidUpdateContactsForDisplay:(SharedTripSuggestionsDataSource *)arg1;

@optional
- (void)suggestionsDataSourceWillUpdateContactsForDisplay:(SharedTripSuggestionsDataSource *)arg1;
@end

