//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSProgress, NSString, NSURL;

@protocol FPArchiveServiceProtocol
- (NSProgress *)unarchiveItemAtURL:(NSURL *)arg1 passphrases:(NSArray *)arg2 addToKeychain:(_Bool)arg3 destinationFolderURL:(NSURL *)arg4 acceptedFormats:(unsigned long long)arg5 completionHandler:(void (^)(NSURL *, NSError *))arg6;
- (NSProgress *)unarchiveItemAtURL:(NSURL *)arg1 passphrases:(NSArray *)arg2 destinationFolderURL:(NSURL *)arg3 acceptedFormats:(unsigned long long)arg4 completionHandler:(void (^)(NSURL *, NSError *))arg5;
- (NSProgress *)unarchiveItemAtURL:(NSURL *)arg1 passphrases:(NSArray *)arg2 destinationFolderURL:(NSURL *)arg3 completionHandler:(void (^)(NSURL *, NSError *))arg4;
- (NSProgress *)unarchiveItemAtURL:(NSURL *)arg1 passphrase:(NSString *)arg2 destinationFolderURL:(NSURL *)arg3 completionHandler:(void (^)(NSURL *, NSError *))arg4;
- (NSProgress *)archiveItemsWithURLs:(NSArray *)arg1 passphrase:(NSString *)arg2 addToKeychain:(_Bool)arg3 compressionFormat:(unsigned long long)arg4 destinationFolderURL:(NSURL *)arg5 completionHandler:(void (^)(NSURL *, NSString *, NSError *))arg6;
- (NSProgress *)archiveItemsWithURLs:(NSArray *)arg1 compressionFormat:(unsigned long long)arg2 destinationFolderURL:(NSURL *)arg3 completionHandler:(void (^)(NSURL *, NSString *, NSError *))arg4;
- (void)itemDescriptorsForItemAtURL:(NSURL *)arg1 passphrases:(NSArray *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)itemDescriptorsForItemAtURL:(NSURL *)arg1 passphrase:(NSString *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
@end
