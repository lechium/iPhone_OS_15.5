//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DirectionIntentItemProvider : NSObject
{
}

- (void)searchFieldItemWithResolveditem:(id)arg1 localSearchCompletionFromServer:(id)arg2 searchResultFromServer:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00400000009ff7aa
- (void)directionItemWithDirectionIntent:(id)arg1 localSearchCompletionOrigin:(id)arg2 localSearchCompletionDestination:(id)arg3 searchResultOrigin:(id)arg4 searchResultDestination:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000009ff3ab
- (void)directionItemWithDirectionIntent:(id)arg1 searchResults:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000009ff13b
- (void)directionItemWithLocalSearchCompletion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000009ff050

@end

