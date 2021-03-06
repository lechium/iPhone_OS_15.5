//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProactiveSuggestionClientModel/NSObject-Protocol.h>

@class ATXClientModelCacheUpdate, NSFileHandle;

@protocol ATXClientModelCacheFileHandlerProtocol <NSObject>
- (NSFileHandle *)readOnlyFileHandleForSuggestionsCache;
- (_Bool)createCacheFileForClientModelCacheUpdate:(ATXClientModelCacheUpdate *)arg1;
- (_Bool)deleteCachedSuggestionsFile;
@end

