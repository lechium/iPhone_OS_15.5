//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerSearchContainerModel
{
    NSString *_queryString;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000009b09
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (void)_updateObserverForQuery;	// IMP=0x0000000000009997
- (void)arrayController:(id)arg1 modelChanged:(id)arg2 differences:(id)arg3;	// IMP=0x00000000000098e7
- (id)_createObserver;	// IMP=0x00000000000097ed
- (id)scopes;	// IMP=0x000000000000978f
- (void)startMonitoringChanges;	// IMP=0x000000000000974e
- (id)displayTitle;	// IMP=0x00000000000096df
- (_Bool)shouldShowTopLevelContainers;	// IMP=0x00000000000096d7
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3;	// IMP=0x00000000000096bf
- (id)initWithPickableTypes:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x0000000000009688

@end

