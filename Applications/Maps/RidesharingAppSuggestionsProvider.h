//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface RidesharingAppSuggestionsProvider : NSObject
{
}

+ (id)sharedProvider;	// IMP=0x0000000000905e17
- (id)partitionedApplicationSuggestionsFromSuggestions:(id)arg1;	// IMP=0x0040000000906a3f
- (id)_applicationsAfterFilteringOutInstalledApplicationsFromApplications:(id)arg1;	// IMP=0x0010000000906870
- (id)_searchErrorWithUserInfo:(id)arg1;	// IMP=0x0010000000906848
- (void)_fetchAppDataForAppIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000906703
- (void)_fetchAppIDsForSource:(struct CLLocationCoordinate2D)arg1 destination:(struct CLLocationCoordinate2D)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000009060c3
- (void)fetchSuggestedAppsForSource:(struct CLLocationCoordinate2D)arg1 destination:(struct CLLocationCoordinate2D)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000905e9c

@end
